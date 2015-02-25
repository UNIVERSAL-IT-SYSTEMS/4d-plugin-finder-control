/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Finder Control
 #	author : miyako
 #	2015/02/26
 #
 # --------------------------------------------------------------------------------*/

#import <ScriptingBridge/ScriptingBridge.h>
#import "Finder.h"

// --- Comment
void Finder_set_comment(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_get_comment(sLONG_PTR *pResult, PackagePtr pParams);

// --- Lock
void Finder_set_locked(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_get_locked(sLONG_PTR *pResult, PackagePtr pParams);

// --- Extension
void Finder_set_extension_hidden(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_get_extension_hidden(sLONG_PTR *pResult, PackagePtr pParams);

// --- Sort
void Finder_SORT_ARRAY(sLONG_PTR *pResult, PackagePtr pParams);

// --- Information
void Finder_get_display_name(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_get_description(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_get_kind(sLONG_PTR *pResult, PackagePtr pParams);

// --- Control
void Finder_reveal(sLONG_PTR *pResult, PackagePtr pParams);
void Finder_trash(sLONG_PTR *pResult, PackagePtr pParams);
