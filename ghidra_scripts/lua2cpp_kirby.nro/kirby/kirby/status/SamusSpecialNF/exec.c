
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SamusdSpecialNF_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SAMUS_STATUS_SPECIAL_N_FLAG_SHOOT);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack208,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack208);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::operator_(aLStack144,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack208);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack224,0x121387c0df);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator_(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack224,0x122f8aff86);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator_(aLStack192,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    FUN_7100210880(aLStack64,this);
    lib::L2CValue::operator_(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack192,aLStack128);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::operator_(aLStack224,aLStack240);
    lib::L2CValue::operator_(aLStack128,aLStack208);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack64,0.01);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack96,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::operator_(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    fVar5 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SAMUS_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

