
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessYoyohead::status::Shot_exec(L2CWeaponNessYoyohead *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined8 uVar6;
  float in_register_00005008;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_710002acf0(this,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack96,0x54f934137);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  uVar6 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                    (this->moduleAccessor,iVar1,HVar2,false);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar6 >> 0x20));
  fVar5 = 0.0;
  lib::L2CValue::L2CValue(aLStack144,in_register_00005008);
  FUN_7100022a10(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack256,0x31ed91fca);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = lib::L2CValue::as_hash(aLStack256);
  uVar6 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                    (this->moduleAccessor,iVar1,HVar2,false);
  lib::L2CValue::L2CValue(aLStack240,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack208,fVar5);
  FUN_7100022a10(aLStack192,this,aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_X);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack288,fVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack304,fVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_X);
  fVar5 = (float)lib::L2CValue::as_number(aLStack256);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_Y);
  fVar5 = (float)lib::L2CValue::as_number(aLStack272);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar5 = (float)app::lua_bind::PostureModule__owner_scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack336,fVar5);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack96,aLStack336);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::operator_(aLStack256,aLStack288);
  lib::L2CValue::operator_(aLStack352,aLStack320);
  lib::L2CValue::operator_(aLStack272,aLStack304);
  lib::L2CValue::operator_(aLStack384,aLStack320);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

