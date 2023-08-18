
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSRotate_main
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100020080(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack128,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack144,0xe87d41146);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x63789520c);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialSRotate_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

