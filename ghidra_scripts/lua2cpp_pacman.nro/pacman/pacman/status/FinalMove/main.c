
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::FinalMove_main(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  Vector3f VVar2;
  int iVar3;
  int iVar4;
  HitStatus HVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Vector3f VVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PACMAN_GENERATE_ARTICLE_BIGPACMAN);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_PACMAN_BIGPACMAN_STATUS_KIND_MOVE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar11);
  lib::L2CValue::L2CValue(aLStack192,28.0);
  lib::L2CValue::operator_(aLStack192,aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CURSOR_OFFSET_Y);
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_CURSOR_ON_POSTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,HIT_STATUS_OFF);
  HVar5 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),0xff);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  fVar14 = 0.0;
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar6 = lib::L2CValue::as_hash(aLStack192);
  fVar11 = (float)lib::L2CValue::as_number(aLStack240);
  fVar12 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  app::lua_bind::CameraModule__reset_main_camera_fov_impl(this->moduleAccessor);
  iVar3 = app::lua_bind::CameraModule__get_camera_type_for_save_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PACMAN_STATUS_FINAL_WORK_INT_CAMERA_TYPE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  uVar13 = app::sv_camera_manager::get_internal_pos();
  lib::L2CValue::L2CValue(aLStack192,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar13 >> 0x20));
  fVar11 = 0.0;
  lib::L2CValue::L2CValue(aLStack160,fVar14);
  FUN_710001c340(aLStack128,this,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  uVar13 = app::sv_camera_manager::get_internal_target();
  lib::L2CValue::L2CValue(aLStack240,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::L2CValue(aLStack208,fVar11);
  FUN_710001c340(aLStack144,this,aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  fVar11 = (float)app::FighterSpecializer_Pacman::get_final_camera_pos();
  lib::L2CValue::L2CValue(aLStack256,fVar11);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  lib::L2CValue::operator_(pLVar7,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack288,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack304,0x1648b9a5a2);
  uVar8 = lib::L2CValue::as_integer(aLStack288);
  uVar9 = lib::L2CValue::as_integer(aLStack304);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack272,fVar11);
  lib::L2CValue::operator_(pLVar7,aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::operator_(pLVar7,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack288,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack304,0x163fbe9534);
  uVar8 = lib::L2CValue::as_integer(aLStack288);
  uVar9 = lib::L2CValue::as_integer(aLStack304);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack272,fVar11);
  lib::L2CValue::operator_(pLVar7,aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar7,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack272,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack288,0x11d09ebcd2);
  uVar8 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
  iVar4 = (int)uVar9;
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  VVar10 = (Vector3f)0xaf;
  this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
  lib::L2CValue::as_number(pLVar7);
  lib::L2CValue::as_number(this_00);
  lib::L2CValue::as_number(this_01);
  lib::L2CValue::as_number(this_02);
  lib::L2CValue::as_number(this_03);
  lib::L2CValue::as_number(this_04);
  VVar2 = (Vector3f)lib::L2CValue::as_integer(aLStack256);
  app::FighterUtil::start_zoom_out(VVar2,VVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack272,FinalMove_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

