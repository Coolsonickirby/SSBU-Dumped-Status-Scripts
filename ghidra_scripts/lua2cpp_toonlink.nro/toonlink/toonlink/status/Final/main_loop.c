
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::Final_main_loop(L2CFighterToonlink *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100011150:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) == 0) {
LAB_71000112cc:
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        this_00 = &this->globalTable;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::_L2CValue(aLStack96);
            goto LAB_7100011314;
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) goto LAB_7100011314;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      else {
        lib::L2CValue::_L2CValue(aLStack96);
LAB_7100011314:
        FUN_7100010b90(this);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
LAB_71000114a0:
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_REQ_CATCH);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          lVar2 = -0x50;
LAB_71000118f4:
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_RESPOND_CATCH);
          iVar5 = lib::L2CValue::as_integer(aLStack176);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
          lib::L2CValue::operator_(aLStack160);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_RESPOND_CATCH)
            ;
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack144,0x108bf6e17e);
            uVar6 = lib::L2CValue::as_integer(aLStack96);
            uVar8 = lib::L2CValue::as_integer(aLStack144);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar6,uVar8);
            lib::L2CValue::L2CValue(aLStack80,fVar9);
            lib::L2CValue::operator_(aLStack128,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
            lib::L2CValue::L2CValue(aLStack144,0x11b1bb357d);
            uVar6 = lib::L2CValue::as_integer(aLStack96);
            uVar8 = lib::L2CValue::as_integer(aLStack144);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar6,uVar8);
            lib::L2CValue::L2CValue(aLStack80,fVar9);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_SEARCH_SEARCH_FP);
            lib::L2CValue::L2CValue(aLStack96,0);
            lib::L2CValue::L2CValue(aLStack160,0);
            lib::L2CValue::L2CValue(aLStack176,0x54f934137);
            lib::L2CValue::L2CValue(aLStack192,0.0);
            lib::L2CValue::L2CValue(aLStack208,0.0);
            lib::L2CValue::L2CValue(aLStack224,_COLLISION_KIND_MASK_HIT);
            lib::L2CValue::L2CValue(aLStack240,_COLLISION_CATEGORY_MASK_FIGHTER);
            lib::L2CValue::L2CValue(aLStack256,_COLLISION_SITUATION_MASK_ALL);
            lib::L2CValue::L2CValue(aLStack272,0);
            lib::L2CValue::L2CValue(aLStack288,_COLLISION_PART_MASK_ALL);
            lib::L2CValue::L2CValue(aLStack304,_HIT_STATUS_MASK_NORMAL);
            lib::L2CValue::L2CValue(aLStack320,false);
            lib::L2CValue::L2CValue(aLStack336,0);
            lib::L2CValue::L2CValue(aLStack352,false);
            lib::L2CValue::L2CValue(aLStack368,_COLLISION_SHAPE_TYPE_CAPSULE);
            lib::L2CValue::L2CValue(aLStack384,false);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
            app::sv_module_access::search(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack384);
            lib::L2CValue::_L2CValue(aLStack368);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack96);
            lVar2 = -0x40;
            goto LAB_71000118f4;
          }
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_CATCH_SUCCESS);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_CATCH_SUCCESS);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,0x221471ab5f);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack400,0);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar6 = lib::L2CValue::operator__(aLStack400,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack400);
        if ((uVar6 & 1) == 0) goto LAB_7100011a14;
        iVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_71000114a0;
LAB_7100011a14:
        iVar5 = 1;
      }
      lib::L2CValue::L2CValue(aLStack80,iVar5);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      cVar1 = (char)&stack0xfffffffffffffff0;
      if ((uVar6 & 1) == 0) {
LAB_710001124c:
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_FINAL_TRANSITION_TERM_ID_FALL);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) == 0) goto LAB_71000112cc;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_FINAL_TRANSITION_TERM_ID_WAIT);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                          (this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) == 0) goto LAB_710001124c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack416,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_7100011a28;
      goto LAB_7100011150;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack416);
    lVar2 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_7100011a28:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

