
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiPickup_end(L2CFighterJack *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  void *pvVar5;
  ulong uVar6;
  Item *pIVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb0a444a09);
  lib::L2CValue::operator_(pLVar4);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    pvVar5 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                               (FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_HOLD_KEEP_FRAME,uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar5);
    }
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pIVar7 = (Item *)lib::L2CValue::as_pointer(aLStack96);
      app::sv_item::end_hooked(pIVar7);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb0a444a09);
      lib::L2CValue::L2CValue(aLStack64,true);
      lib::L2CValue::operator_(pLVar4,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

