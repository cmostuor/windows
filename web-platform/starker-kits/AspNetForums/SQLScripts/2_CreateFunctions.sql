if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[HasReadPost]') and xtype in (N'FN', N'IF', N'TF'))
drop function [dbo].[HasReadPost]
GO

SET QUOTED_IDENTIFIER OFF 
GO
SET ANSI_NULLS ON 
GO





CREATE  function HasReadPost(@UserName nvarchar(50), @PostID int, @ForumID int)
RETURNS bit
AS
BEGIN
DECLARE @HasRead bit
DECLARE @ReadAfter int
SET @HasRead = 0


	-- Do we have topics marked as read?
	SELECT @ReadAfter = MarkReadAfter FROM ForumsRead WHERE Username = @UserName AND ForumID = @ForumID

	IF @ReadAfter IS NOT NULL
	BEGIN
		IF @ReadAfter > @PostID
			RETURN 1
	END
	
	
	IF EXISTS (SELECT HasRead FROM PostsRead WHERE Username = @UserName AND PostID = @PostID)
	  SET @HasRead = 1

RETURN @HasRead
END






GO
SET QUOTED_IDENTIFIER OFF 
GO
SET ANSI_NULLS ON 
GO

