
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::Final_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Fighter *pFVar8;
  float fVar9;
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
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710003f6e0:
    bVar3 = app::FighterSpecializer_Demon::final_module_hit_success();
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,aLStack96);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710003fd60;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_FINAL_FLAG_END_FINAL);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_FINAL_FLAG_END_FINAL_DONE);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_FINAL_FLAG_END_FINAL);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_FINAL_FLAG_END_FINAL_DONE);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_FINAL_MODULE_START_EXIT);
          pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::FighterSpecializer_Demon::call_final_module(pFVar8,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          pLVar7 = aLStack80;
          goto LAB_710003f800;
        }
      }
      bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        this_00 = &this->globalTable;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
LAB_710003fb04:
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) != 0) goto LAB_710003fb74;
          }
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) goto LAB_710003fb04;
LAB_710003fb74:
          lib::L2CValue::L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack144);
          fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack160,fVar9);
          lib::L2CValue::L2CValue(aLStack80,-1.0);
          uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xb9e61061f);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0xf9b673ae9);
            lib::L2CValue::operator_(aLStack144,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0xd1cc74bdd);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,0x11714e7467);
            lib::L2CValue::operator_(aLStack144,aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack160,aLStack112);
          lib::L2CValue::L2CValue(aLStack176,aLStack144);
          lib::L2CValue::L2CValue(aLStack192,true);
          lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                    (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack208,true);
          lib::L2CValue::L2CValue(aLStack224,false);
          FUN_710003e8d0(this,aLStack208,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::L2CValue(aLStack240,aLStack112);
          lib::L2CValue::L2CValue(aLStack256,aLStack144);
          lib::L2CValue::L2CValue(aLStack272,true);
          FUN_710003dd10(this,aLStack240,aLStack256,aLStack272);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710003fd60:
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_FINAL_READY);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710003f80c;
      goto LAB_710003f6e0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710003f800:
    lib::L2CValue::_L2CValue(pLVar7);
    lVar2 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710003f80c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

