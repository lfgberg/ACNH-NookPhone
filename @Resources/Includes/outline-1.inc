[Outline]
Meter=Shape
Shape=Rectangle 0,0,#AppSize#,#AppSize#,15 | Fill Color 0,0,0,0 | StrokeWidth 15 | Extend MyModifiers
MyModifiers=Stroke Color 0,0,0,0
X=0
Y=0

[App]
Meter=Image
LeftMouseUpAction=["#AppPath#"]
MouseOverAction=[!SetOption SelectedApp Text "#AppName#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#AppImage#
X=#Column1X#
Y=#Row1Y#
W=#AppSize#

[App2]
Meter=Image
LeftMouseUpAction=["#App2Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App2Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App2Image#
X=#Column2X#
Y=#Row1Y#
W=#AppSize#

[App3]
Meter=Image
LeftMouseUpAction=["#App3Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App3Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App3Image#
X=#Column3X#
Y=#Row1Y#
W=#AppSize#

[App4]
Meter=Image
LeftMouseUpAction=["#App4Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App4Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App4Image#
X=#Column1X#
Y=#Row2Y#
W=#AppSize#

[App5]
Meter=Image
LeftMouseUpAction=["#App5Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App5Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App5Image#
X=#Column2X#
Y=#Row2Y#
W=#AppSize#

[App6]
Meter=Image
LeftMouseUpAction=["#App6Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App6Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App6Image#
X=#Column3X#
Y=#Row2Y#
W=#AppSize#

[App7]
Meter=Image
LeftMouseUpAction=["#App7Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App7Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App7Image#
X=#Column1X#
Y=#Row3Y#
W=#AppSize#

[App8]
Meter=Image
LeftMouseUpAction=["#App8Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App8Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App8Image#
X=#Column2X#
Y=#Row3Y#
W=#AppSize#

[App9]
Meter=Image
LeftMouseUpAction=["#App9Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App9Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App9Image#
X=#Column3X#
Y=#Row3Y#
W=#AppSize#

[App10]
Meter=Image
LeftMouseUpAction=["#App10Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App10Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App10Image#
X=#Column1X#
Y=#Row4Y#
W=#AppSize#

[App11]
Meter=Image
LeftMouseUpAction=["#App11Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App11Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App11Image#
X=#Column2X#
Y=#Row4Y#
W=#AppSize#

[App12]
Meter=Image
LeftMouseUpAction=["#App12Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App12Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App12Image#
X=#Column3X#
Y=#Row4Y#
W=#AppSize#

[App13]
Meter=Image
LeftMouseUpAction=["#App13Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App13Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App13Image#
X=#Column1X#
Y=#Row5Y#
W=#AppSize#

[App14]
Meter=Image
LeftMouseUpAction=["#App14Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App14Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App14Image#
X=#Column2X#
Y=#Row5Y#
W=#AppSize#

[App15]
Meter=Image
LeftMouseUpAction=["#App15Path#"]
MouseOverAction=[!SetOption SelectedApp Text "#App15Name#"][!SetOption Outline MyModifiers "Stroke Color #AppColor#"][!SetOption Outline X "[[#CURRENTSECTION]:X]"][!SetOption Outline Y "[[#CURRENTSECTION]:Y]"][!UpdateMeter Outline][!Redraw]
MouseLeaveAction=[!SetOption SelectedApp Text "NookPhone"][!SetOption Outline MyModifiers "Stroke Color 0,0,0,0"][!UpdateMeter Outline][!Redraw]
ImageName=#App15Image#
X=#Column3X#
Y=#Row5Y#
W=#AppSize#
