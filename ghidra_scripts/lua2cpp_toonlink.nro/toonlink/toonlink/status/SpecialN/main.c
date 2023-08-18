
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::SpecialN_main(L2CFighterToonlink *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor **ppBVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  ppBVar7 = &this->moduleAccessor;
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_START);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_CONTINUE_END);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_DOUBLE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_STEP_START);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_STEP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_SHOOT_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_BOW_WORK_INT_DOUBLE_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0xec7acfd87);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,-100);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOW_WORK_INT_MAX_HOLD_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_STATUS_BOW_WORK_INT_MAX_HOLD_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack112,pLVar6);
  iVar2 = FIGHTER_KIND_KIRBY;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  uVar4 = lib::L2CValue::operator__(aLStack80,pLVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_LINK);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_impl(*ppBVar7,iVar2,false,-1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack128,false);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar7,iVar2,(bool)(bVar1 & 1),0);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_GENERATE_ARTICLE_BOW);
        lib::L2CValue::L2CValue(aLStack128,_WN_LINK_BOW_STATUS_KIND_HAVE);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::ArticleModule__change_status_exist_impl(*ppBVar7,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_LINK);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar7,0);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar6 = aLStack128;
    }
    else {
      iVar2 = app::lua_bind::ItemModule__get_have_item_kind_impl(*ppBVar7,0);
      lib::L2CValue::L2CValue(aLStack144,iVar2);
      lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_LINKARROW);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) goto LAB_710000b508;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_BOW_FLAG_DOUBLE);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_GENERATE_ARTICLE_BOWARROW);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar7,iVar2,false,-1);
      pLVar6 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
LAB_710000b508:
  lib::L2CValue::L2CValue(aLStack80,SpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

