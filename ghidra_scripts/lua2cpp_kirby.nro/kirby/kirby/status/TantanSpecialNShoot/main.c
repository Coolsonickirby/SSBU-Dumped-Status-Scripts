
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::TantanSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
  lib::L2CValue::L2CValue(aLStack96,0xd483c0ed2);
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALSIMPLE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALSIMPLE);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_KIRBY_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,TantanSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

