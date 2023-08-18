
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SheikSpecialN_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar3 = lib::L2CValue::as_integer(pLVar7);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) goto LAB_7100066928;
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar3 = lib::L2CValue::as_integer(pLVar7);
  uVar3 = app::sv_battle_object::category(uVar3);
  lib::L2CValue::L2CValue(aLStack128,uVar3 & 0xff);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar3 = lib::L2CValue::as_integer(pLVar7);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  lib::L2CValue::L2CValue(aLStack96,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_SHEIK);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
      uVar8 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N_LOOP);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N_SHOOT);
          uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack112,aLStack96);
            goto LAB_7100066730;
          }
        }
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N_LOOP);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SHEIK_SPECIAL_N_SHOOT);
        uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator_(aLStack112,aLStack96);
LAB_7100066730:
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_INTERRUPT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_GENERATE_ARTICLE_NEEDLEHAVE);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar4,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if (-1 < iVar4) {
      iVar6 = -1;
      do {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_GENERATE_ARTICLE_NEEDLE);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar5,false,-1);
        lib::L2CValue::_L2CValue(aLStack96);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar6 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_CHARGE_MAX);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xaec2db62e);
    HVar9 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100066928:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

