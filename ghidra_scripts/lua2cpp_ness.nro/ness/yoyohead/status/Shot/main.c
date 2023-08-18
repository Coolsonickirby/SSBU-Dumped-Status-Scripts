
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessYoyohead::status::Shot_main(L2CWeaponNessYoyohead *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined8 uVar6;
  float in_register_00005008;
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
  
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack160,0x54f934137);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  HVar2 = lib::L2CValue::as_hash(aLStack160);
  uVar6 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                    (this->moduleAccessor,iVar1,HVar2,false);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar6 >> 0x20));
  fVar5 = 0.0;
  lib::L2CValue::L2CValue(aLStack112,in_register_00005008);
  FUN_7100022a10(aLStack96,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack240,0x31ed91fca);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  HVar2 = lib::L2CValue::as_hash(aLStack240);
  uVar6 = app::lua_bind::LinkModule__get_parent_model_joint_global_position_impl
                    (this->moduleAccessor,iVar1,HVar2,false);
  lib::L2CValue::L2CValue(aLStack208,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  FUN_7100022a10(aLStack160,this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_X);
  fVar5 = (float)lib::L2CValue::as_number(aLStack224);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,pLVar4);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_PARENT_THROW_Y);
  fVar5 = (float)lib::L2CValue::as_number(aLStack224);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,Shot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

