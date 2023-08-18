
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSDash_exec(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_HIT_FIGHTER);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_S_INT_HIT_FIGHTER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x18e512c18b);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)app::sv_math::powf(fVar6,fVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x19074ee57c);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)app::sv_math::powf(fVar6,fVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack128,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x1bb3f839ce);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)app::sv_math::powf(fVar6,fVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack176,0x1c9046a000);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar6 = (float)app::sv_math::powf(fVar6,fVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack128,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_S_FLAG_HIT_FIGHTER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

