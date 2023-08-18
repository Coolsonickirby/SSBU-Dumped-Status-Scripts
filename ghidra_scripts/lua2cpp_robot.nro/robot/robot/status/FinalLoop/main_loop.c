
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::FinalLoop_main_loop(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLAG_SEARCH);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_GENERATE_ARTICLE_MAINLASER);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_MAINLASER_FIRE_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      bVar1 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_MAINLASER_FIRE_FRAME)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar9,iVar3,0);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_FINAL_END);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_GENERATE_ARTICLE_MAINLASER);
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROBOT_MAINLASER_STATUS_KIND_END);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::ArticleModule__change_status_exist_impl(*ppBVar9,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          goto LAB_710001203c;
        }
      }
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xe474b5968);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_MAINLASER_FIRE_FRAME);
      iVar3 = lib::L2CValue::as_integer(pLVar6);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x107379fb2b);
  uVar5 = lib::L2CValue::operator_(aLStack96,pLVar6);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLAG_HOMINGLASER_LOOP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_RESTART_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack112,0x26e07318f0);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar9,iVar3,HVar8,0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLAG_HOMINGLASER_LOOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        pLVar6 = aLStack80;
        goto LAB_7100012028;
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_SHOT_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_GENERATE_ARTICLE_HOMINGLASER);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_GENERATE_ARTICLE_HOMINGLASER);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator_(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLAG_HOMINGLASER_LOOP);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack144,0x155ea6ecb5);
          uVar5 = lib::L2CValue::as_integer(aLStack128);
          uVar7 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_RESTART_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack144,0x14777fcb6c);
        uVar5 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator_(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_ROBOT_STATUS_FINAL_WORK_INT_HOMINGLASER_SHOT_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar6 = aLStack112;
LAB_7100012028:
        lib::L2CValue::_L2CValue(pLVar6);
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100010e30(this);
LAB_710001203c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

