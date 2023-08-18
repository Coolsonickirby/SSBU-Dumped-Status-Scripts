
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow2::status::Stay_main(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Weapon *pWVar4;
  Vector2f VVar5;
  undefined in_w3;
  float fVar6;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,*pfVar2);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack112,pfVar2[2]);
  FUN_7100005230(aLStack96,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_X);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  lib::L2CValue::operator_(pLVar3,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar3,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_PRE_MOVE_POS_X);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack176,fVar6);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_PRE_MOVE_POS_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack208,fVar6);
  VVar5 = (Vector2f)aLStack208;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,SUB81(aLStack208,0));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
  lib::L2CValue::as_number(this_00);
  lib::L2CValue::as_number(this_01);
  lib::L2CValue::as_number(this_02);
  lib::L2CValue::as_number(this_03);
  app::WeaponSpecializer_MasterArrow1::set_arrow_max_effect(pWVar4,0,VVar5,(bool)in_w3);
  lib::L2CValue::L2CValue(aLStack192,Stay_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

