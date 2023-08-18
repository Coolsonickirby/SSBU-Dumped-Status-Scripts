
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow2::status::Search_main_loop(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Weapon *pWVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar5 = lib::L2CValue::operator__(aLStack80,pLVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_7100006270:
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_REFLECTED_STATUS);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_ARROW1_REFLECTED_STATUS_WAIT);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_710000637c;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,false);
    pWVar6 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::WeaponSpecializer_MasterArrow1::set_search(pWVar6,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_ARROW1_REFLECTED_STATUS_NONE);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_REFLECTED_STATUS);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_SEARCH_HIT_COLLISION);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
LAB_7100006260:
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_7100006270;
    }
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_MASTER_ARROW1_STATUS_WORK_INT_REFLECTED_STATUS);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_ARROW1_REFLECTED_STATUS_NONE);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      goto LAB_7100006260;
    }
    lib::L2CValue::L2CValue(aLStack176,0);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar2,false);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100006270;
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_ARROW1_STATUS_KIND_STAY);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000637c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

