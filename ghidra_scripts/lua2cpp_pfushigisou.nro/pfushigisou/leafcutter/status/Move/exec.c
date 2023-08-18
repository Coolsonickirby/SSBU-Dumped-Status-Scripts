
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPfushigisouLeafcutter::status::Move_exec
          (L2CWeaponPfushigisouLeafcutter *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack128,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_INT_REANGLE_COUNTER);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,0x10cab9c561);
  lib::L2CValue::L2CValue(aLStack128,0xdd393a247);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar3 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x10cab9c561);
    lib::L2CValue::L2CValue(aLStack144,0xbe5d2139c);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0x66933a7e6);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)auStack208);
    fVar7 = (float)app::sv_math::randf(HVar5,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar7);
    lib::L2CValue::L2CValue(aLStack80,2.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_((L2CValue *)auStack192,aLStack224);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::operator_(aLStack160,aLStack128);
    lib::L2CValue::operator_(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE_TARGET);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_INT_REANGLE_COUNTER);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_OWN_ANGLE_ACCEL);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_OWN_ANGLE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE_TARGET);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE)
  ;
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pLVar6 = aLStack128;
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number(aLStack80);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar7 = (float)app::sv_math::vec2_length(fVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar6);
  lib::L2CAgent::math_cos((L2CAgent *)auStack208,pLVar6);
  lib::L2CValue::operator_((L2CValue *)auStack192,aLStack128);
  lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack144);
  pLVar6 = aLStack160;
  lib::L2CValue::operator_(aLStack80,pLVar6);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar6);
  lib::L2CAgent::math_sin((L2CAgent *)auStack192,pLVar6);
  lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack128);
  lib::L2CValue::operator_(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

