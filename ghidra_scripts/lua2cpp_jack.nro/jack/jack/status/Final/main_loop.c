
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::FinalTurnDash_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Hash40 HVar5;
  long lVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) != 0) {
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,HVar5);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack96,lVar6);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack144,lVar6);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) != 0) goto LAB_7100018c68;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100018c68:
      lib::L2CValue::L2CValue(aLStack128,0xe5e27ae86);
      lib::L2CValue::L2CValue(aLStack96,0xa584c4b41);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar6,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND_AIR);
      lVar6 = lib::L2CValue::as_integer(aLStack128);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar6,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,true);
      lib::L2CValue::L2CValue(aLStack160,aLStack112);
      lib::L2CValue::L2CValue(aLStack176,aLStack128);
      lib::L2CValue::L2CValue(aLStack192,true);
      FUN_7100016ee0(this,aLStack144,aLStack160,aLStack176,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,false);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack208,0);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
      lib::L2CValue::L2CValue(aLStack96,&DAT_71000198f0);
      lib::L2CValue::operator_(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_KIND_FINAL_TURN_DASH);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar10);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar10);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack272,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack288,0xadec47ea3);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      uVar9 = lib::L2CValue::as_integer(aLStack288);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack256,fVar11);
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack304,fVar11);
      lib::L2CValue::operator_(aLStack256,aLStack304);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar2 = app::FighterSpecializer_Jack::final_module_hit_success();
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_KIND_FINAL_DASH_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
      goto LAB_7100019130;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_FINAL);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
      fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator_(pLVar8,aLStack112);
      lib::L2CValue::L2CValue(aLStack240,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack256,0xcee0a3848);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      uVar9 = lib::L2CValue::as_integer(aLStack256);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME_INIT);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack112,iVar4);
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
        lib::L2CValue::L2CValue(aLStack240,iVar4);
        lib::L2CValue::operator_(aLStack112,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0xb54dafbfb);
        lib::L2CValue::L2CValue(aLStack240,0x15a68a0e22);
        uVar7 = lib::L2CValue::as_integer(aLStack128);
        uVar9 = lib::L2CValue::as_integer(aLStack240);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar9);
        lib::L2CValue::L2CValue(aLStack112,iVar4);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_KIND_FINAL_TURN_DASH);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack96);
          return;
        }
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
LAB_71000193ac:
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
LAB_7100019470:
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) goto LAB_71000194a8;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) goto LAB_71000194b0;
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100019470;
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,lVar6);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_JACK_STATUS_FINAL_INT_MOTION_KIND_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack256);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack240,lVar6);
      lib::L2CValue::L2CValue(aLStack272,true);
      FUN_7100016ee0(this,aLStack96,aLStack112,aLStack240,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar8 = aLStack128;
      goto LAB_7100019134;
    }
LAB_71000194a8:
    lVar6 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_FINAL_INT_DASH_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) goto LAB_71000193ac;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_KIND_FINAL_READY);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60))
    ;
LAB_7100019130:
    pLVar8 = aLStack112;
LAB_7100019134:
    lib::L2CValue::_L2CValue(pLVar8);
    lVar6 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
LAB_71000194b0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

