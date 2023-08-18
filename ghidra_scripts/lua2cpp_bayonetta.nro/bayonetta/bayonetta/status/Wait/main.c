
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Wait_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_wait_common(this);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_GEKIKARA);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      bVar2 = false;
      goto LAB_710000e968;
    }
    lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_ITEM_WAIT_MOTION_KIND);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::L2CValue(aLStack80,0x9640bfe6e);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
      lib::L2CValue::L2CValue(aLStack112,pLVar6);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_N_END);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710000e61c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_S_HOLD_END);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710000e61c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D_LANDING);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710000e61c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710000e61c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_LW_BATWITHIN);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) goto LAB_710000e61c;
        lib::L2CValue::L2CValue(aLStack96,false);
      }
      else {
LAB_710000e61c:
        lib::L2CValue::L2CValue(aLStack96,true);
      }
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x9640bfe6e);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        fVar7 = (float)lib::L2CValue::as_number(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x67df13f9a);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        fVar7 = (float)lib::L2CValue::as_number(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar6 = aLStack128;
      goto LAB_710000e94c;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack112,pLVar6);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar4);
    FUN_7100012ec0(aLStack96,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x60af60f0c);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar6 = aLStack144;
      goto LAB_710000e94c;
    }
    lua2cpp::L2CFighterCommon::sub_wait_motion_mtrans(this);
  }
  else {
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,HVar4);
    lib::L2CValue::L2CValue(aLStack80,0x12e26fb1c3);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x12e26fb1c3);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack112;
LAB_710000e94c:
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
                (this->moduleAccessor,fVar7,true,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar2 = true;
LAB_710000e968:
  lib::L2CValue::L2CValue(aLStack176,bVar2);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
    lib::L2CValue::L2CValue(aLStack112,pLVar6);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar4);
    FUN_7100012ec0(aLStack96,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_wait_motion_mtrans(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x60af60f0c);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,Wait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

