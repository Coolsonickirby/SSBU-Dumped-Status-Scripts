
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSDash_main_loop(L2CFighterInkling *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CFighterInkling *pLVar5;
  float fVar6;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710001f950();
  FUN_7100020d50(aLStack112,this);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_71000258d0(this);
  lib::L2CValue::L2CValue(aLStack128,0xe3d6acb62);
  lib::L2CValue::L2CValue(aLStack144,0x127f383ead);
  lib::L2CValue::L2CValue(aLStack160,true);
  FUN_710001cbc0(this,aLStack128,aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_7100006390(aLStack176,this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0x49b6edd00);
    lib::L2CValue::L2CValue(aLStack192,0x821ce80b6);
    lib::L2CValue::L2CValue(aLStack208,false);
    FUN_710001cfc0(this,aLStack176,aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0xb76f8794c);
    lib::L2CValue::L2CValue(aLStack192,0xb76f8794c);
    lib::L2CValue::L2CValue(aLStack208,false);
    FUN_710001cfc0(this,aLStack176,aLStack192);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),false);
  FUN_7100026fb0(this,aLStack224,aLStack240,auStack272 + 0x10);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  FUN_71000265a0(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    FUN_7100006480(auStack272,this);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack288,fVar6);
    lib::L2CValue::operator_((L2CValue *)auStack272,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack272);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  FUN_7100023670(aLStack96,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar5 = this;
    FUN_7100006480(auStack272);
    lib::L2CAgent::math_abs((L2CAgent *)auStack272,(L2CValue *)pLVar5);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack304,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    fVar6 = (float)lib::L2CValue::as_number(aLStack288);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
    lib::L2CValue::L2CValue(aLStack288,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  }
  return;
}

