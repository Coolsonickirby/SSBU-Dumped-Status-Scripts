
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::ShoulderedDonkeyStart_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  Hash40 HVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  BattleObjectModuleAccessor *pBVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_INSTANCE_WORK_ID_FLAG_BACKSHIELD_INVISIBLE);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0x885baf52e);
  lib::L2CValue::L2CValue(aLStack168,0.0);
  lib::L2CValue::L2CValue(aLStack184,1.0);
  lib::L2CValue::L2CValue(aLStack200,false);
  HVar8 = lib::L2CValue::as_hash(aLStack152);
  fVar13 = (float)lib::L2CValue::as_number(aLStack168);
  fVar14 = (float)lib::L2CValue::as_number(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack200);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack184,LINK_NO_CAPTURE);
  iVar6 = lib::L2CValue::as_integer(aLStack184);
  uVar7 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar6,true);
  lib::L2CValue::L2CValue(aLStack152,uVar7);
  uVar7 = lib::L2CValue::as_integer(aLStack152);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar7);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack168,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack168,pvVar9);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::L2CValue(aLStack152,0xcad2ee25e);
  lib::L2CValue::L2CValue(aLStack200,0x1426fde3f0);
  uVar10 = lib::L2CValue::as_integer(aLStack152);
  uVar11 = lib::L2CValue::as_integer(aLStack200);
  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
  iVar6 = app::lua_bind::WorkModule__get_param_int_impl(pBVar12,uVar10,uVar11);
  lib::L2CValue::L2CValue(aLStack184,iVar6);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack200);
  lib::L2CValue::L2CValue(aLStack152,1);
  uVar10 = lib::L2CValue::operator__(aLStack184,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack152,0xbcd0a0931);
    lib::L2CValue::operator_(aLStack200,aLStack152);
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,0xc53691dc4);
    lib::L2CValue::operator_(aLStack200,aLStack152);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lib::L2CValue::L2CValue(aLStack232,1.0);
  lib::L2CValue::L2CValue(aLStack248,false);
  lib::L2CValue::L2CValue(aLStack264,false);
  lib::L2CValue::L2CValue(aLStack280,0.0);
  lib::L2CValue::L2CValue(aLStack296,false);
  lib::L2CValue::L2CValue(aLStack312,true);
  lib::L2CValue::L2CValue(aLStack328,true);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  HVar8 = lib::L2CValue::as_hash(aLStack200);
  fVar13 = (float)lib::L2CValue::as_number(aLStack216);
  fVar14 = (float)lib::L2CValue::as_number(aLStack232);
  bVar1 = lib::L2CValue::as_bool(aLStack248);
  bVar2 = lib::L2CValue::as_bool(aLStack264);
  fVar15 = (float)lib::L2CValue::as_number(aLStack280);
  bVar3 = lib::L2CValue::as_bool(aLStack296);
  bVar4 = lib::L2CValue::as_bool(aLStack312);
  bVar5 = lib::L2CValue::as_bool(aLStack328);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar8,fVar13,fVar14,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
             fVar15,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack328);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0xcad2ee25e);
  lib::L2CValue::L2CValue(aLStack232,0x1b4e11990f);
  uVar10 = lib::L2CValue::as_integer(aLStack152);
  uVar11 = lib::L2CValue::as_integer(aLStack232);
  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack168);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar12,uVar10,uVar11);
  lib::L2CValue::L2CValue(aLStack216,fVar13);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0.0);
  uVar10 = lib::L2CValue::operator__(aLStack216,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar10 & 1) == 0) {
    uVar7 = app::lua_bind::LinkModule__get_model_constraint_flag_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack232,uVar7);
    lib::L2CValue::L2CValue(aLStack152,CONSTRAINT_FLAG_OFFSET_ROT);
    lib::L2CValue::operator_(aLStack232,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::operator_(aLStack232,aLStack248);
    lib::L2CValue::_L2CValue(aLStack248);
    uVar7 = lib::L2CValue::as_integer(aLStack232);
    app::lua_bind::LinkModule__set_model_constraint_flag_impl(this->moduleAccessor,uVar7);
    fVar13 = (float)lib::L2CValue::as_number(aLStack216);
    app::lua_bind::LinkModule__set_constraint_rot_offset_x_impl(this->moduleAccessor,fVar13);
    lib::L2CValue::_L2CValue(aLStack232);
  }
  lib::L2CValue::L2CValue(aLStack152,ShoulderedDonkeyStart_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x68);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  return;
}

