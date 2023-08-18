
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::Final_main(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  HitStatus HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 in_register_00005008;
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
  
  lib::L2CValue::L2CValue(aLStack208,0x50000000);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_TARGET_BATTLE_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_DIST_MIN);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_TYPE_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x11f0665576);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  fVar9 = (float)lib::L2CValue::as_number(aLStack208);
  app::lua_bind::AttackModule__set_damage_shake_scale_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  uVar11 = app::FighterUtil::renderer_get_clear_color();
  lib::L2CValue::L2CValue(aLStack208,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::L2CValue(aLStack176,(float)in_register_00005008);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)in_register_00005008 >> 0x20));
  FUN_710003e500(aLStack144,this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_R);
  fVar9 = (float)lib::L2CValue::as_number(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_G);
  fVar9 = (float)lib::L2CValue::as_number(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_B);
  fVar9 = (float)lib::L2CValue::as_number(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x11c630b12);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_BG_COLOR_A);
  fVar9 = (float)lib::L2CValue::as_number(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  fVar9 = (float)app::FighterUtil::renderer_get_color_rate();
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_ORIGINAL_COLOR_RATE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack224);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_INVISIBLE_STAGE_TIME);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_INVISIBLE_STAGE);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack240,false);
  FUN_710003dbe0(this,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  app::lua_bind::ModelModule__disable_gold_eye_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_HIT_STATUS_XLU);
  HVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x992785806);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue(aLStack304,false);
    HVar8 = lib::L2CValue::as_hash(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack272);
    fVar10 = (float)lib::L2CValue::as_number(aLStack288);
    bVar1 = lib::L2CValue::as_bool(aLStack304);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x5ecd55cc6);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue(aLStack304,false);
    HVar8 = lib::L2CValue::as_hash(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack272);
    fVar10 = (float)lib::L2CValue::as_number(aLStack288);
    bVar1 = lib::L2CValue::as_bool(aLStack304);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,false);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::ItemModule__set_change_status_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

