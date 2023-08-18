
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopa::status::Final_main_loop(L2CFighterKoopa *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_GENERATE_KOOPAG);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_WAIT_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_GENERATE_ARTICLE_KOOPAG);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack144,0x186240ba28);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          uVar9 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,1);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_FINAL_WORK_INT_CHANGE_WAIT_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar6);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_WAIT_CHANGE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          goto LAB_7100013640;
        }
      }
      goto LAB_71000136f0;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_WORK_INT_CHANGE_WAIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) goto LAB_71000136f0;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar8 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_WAIT_CHANGE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPA_STATUS_FINAL_WORK_INT_CHANGE_WAIT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_GENERATE_ARTICLE_KOOPAG);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_impl(*ppBVar10,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_WAIT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_GENERATE_KOOPAG);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        goto LAB_7100013640;
      }
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_OFF);
        HVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::HitModule__set_whole_impl(*ppBVar10,HVar4,0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar10,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::ItemModule__set_have_item_visibility_impl(*ppBVar10,(bool)(bVar1 & 1),0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::ItemModule__set_attach_item_visibility_impl(*ppBVar10,(bool)(bVar1 & 1),0xff)
        ;
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::CameraModule__set_whole_impl(*ppBVar10,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        app::lua_bind::AreaModule__set_whole_impl(*ppBVar10,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack80);
        bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,false);
          FUN_7100013a80(aLStack96,this,aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
        lib::L2CValue::L2CValue(aLStack80,&DAT_7100013b40);
        lib::L2CValue::operator_(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_WAIT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_NONE);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1f20a9d549);
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
        bVar1 = lib::L2CValue::as_bool(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_flag_impl(*ppBVar10,(bool)(bVar1 & 1),iVar3);
        lib::L2CValue::_L2CValue(aLStack144);
LAB_7100013640:
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
LAB_71000136f0:
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      bVar1 = app::lua_bind::VisibilityModule__get_whole_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        this_00 = &this->globalTable;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
LAB_71000137f0:
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) goto LAB_7100013828;
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((uVar7 & 1) == 0) goto LAB_7100013838;
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) goto LAB_71000137f0;
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::L2CValue(aLStack80,false);
        FUN_7100012c00(this,aLStack80);
        pLVar8 = aLStack80;
        goto LAB_7100013834;
      }
LAB_7100013828:
      lib::L2CValue::_L2CValue(aLStack160);
    }
    pLVar8 = aLStack144;
  }
LAB_7100013834:
  lib::L2CValue::_L2CValue(pLVar8);
LAB_7100013838:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

