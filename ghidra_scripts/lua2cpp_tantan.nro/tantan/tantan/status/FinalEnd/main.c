
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::FinalEnd_main(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::FighterManager__exit_finalbg_impl(FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_FALL);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::FighterUtil::renderer_set_enable_clear_color_setting((bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
  lib::L2CValue::L2CValue(aLStack112,0xdf3b40b09);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack208,0xcec1191d4);
  lVar3 = lib::L2CValue::as_integer(aLStack80);
  lVar4 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
    lib::L2CValue::L2CValue(aLStack208,0xdf3b40b09);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar7,false,-1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
    lib::L2CValue::L2CValue(aLStack208,0x92ee4d34c);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar7,false,-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_STATUS_FINAL_INT_PUNCH_KIND_R);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Tantan::set_punch_kind(pFVar8,iVar2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_FINAL_MODULE_END_INIT);
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  app::FighterSpecializer_Tantan::call_final_module(pFVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

