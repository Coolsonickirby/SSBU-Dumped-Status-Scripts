
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow2::status::Search_main(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  Weapon *pWVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x6b4f0dba7);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar6 = lib::L2CValue::as_hash(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_ARROW1_REFLECTED_STATUS_NONE);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_REFLECTED_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack112,true);
  pWVar7 = (Weapon *)lib::L2CValue::as_pointer(this_00);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::WeaponSpecializer_MasterArrow1::set_search(pWVar7,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,2);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if (-1 < iVar2) {
    iVar3 = -1;
    do {
      lib::L2CValue::L2CValue(aLStack112,-1);
      lib::L2CValue::L2CValue
                (aLStack144,iVar3 + _WEAPON_MASTER_ARROW1_STATUS_WORK_INT_EFFECT_HANDLE_START + 1);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  lib::L2CValue::L2CValue(aLStack112,Search_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

