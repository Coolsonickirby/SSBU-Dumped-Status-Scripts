
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSHit_end(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  void *pvVar6;
  Item *pIVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_CATEGORY);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  FUN_71000241c0(aLStack128,aLStack144,aLStack160);
  lib::L2CValue::operator_(aLStack128);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  this_00 = &this->globalTable;
  if ((bVar1 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_PICKUP);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                                 (FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLAG,uVar3);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack128,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar6);
      }
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pIVar7 = (Item *)lib::L2CValue::as_pointer(aLStack128);
        app::sv_item::end_hooked(pIVar7);
      }
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CATCH_WAIT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_PICKUP);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_S_CUT);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

