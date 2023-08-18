
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::SmashAppeal_main_loop(L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710001f274:
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,HVar6);
        lib::L2CValue::L2CValue(aLStack96,0xe0e23fe00);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x11259327fc);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,0x10926c5e8f);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack160,1.0);
            lib::L2CValue::L2CValue(aLStack176,false);
            HVar6 = lib::L2CValue::as_hash(aLStack96);
            fVar7 = (float)lib::L2CValue::as_number(aLStack128);
            fVar8 = (float)lib::L2CValue::as_number(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack128);
            goto LAB_710001f5a4;
          }
          lib::L2CValue::L2CValue(aLStack96,0xca993a656);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
            lib::L2CValue::L2CValue(aLStack128,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            lib::L2CValue::_L2CValue(aLStack112);
            return;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x11259327fc);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack160,1.0);
          lib::L2CValue::L2CValue(aLStack176,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack128);
          fVar8 = (float)lib::L2CValue::as_number(aLStack160);
          bVar1 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack160,false);
            FUN_710001f9e0(aLStack128,this,aLStack160);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
          lib::L2CValue::L2CValue(aLStack96,&DAT_710001fb50);
          lib::L2CValue::operator_(pLVar5,aLStack96);
LAB_710001f5a4:
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_ADVANCE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0x1f73affc96);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_APPEAL_KIND_SMASH);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xca993a656);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,false);
        HVar6 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack176);
        fVar8 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_ADVANCE_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      iVar3 = 0;
      goto LAB_710001f770;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = aLStack96;
LAB_710001f4c0:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar5 = aLStack112;
      goto LAB_710001f4c0;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) goto LAB_710001f274;
  }
  iVar3 = 1;
LAB_710001f770:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

