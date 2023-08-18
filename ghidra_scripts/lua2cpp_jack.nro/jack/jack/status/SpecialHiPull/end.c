
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiPull_end(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  Item *pIVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_PICKUP);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::sv_item::is_captured(uVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack112);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        pvVar7 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                                   (FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_HOLD_KEEP_FRAME,uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack112,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,pvVar7);
        }
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack112);
          app::sv_item::end_hooked(pIVar8);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI_THROW);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

