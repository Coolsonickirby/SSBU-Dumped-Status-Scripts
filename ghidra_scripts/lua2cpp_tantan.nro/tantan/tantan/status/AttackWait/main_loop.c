
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackWait_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
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
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    FUN_71000442a0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xb0);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_71000632b4;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      FUN_7100044720(this,aLStack64);
      goto LAB_7100063610;
    }
LAB_71000632b4:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack128,true);
    FUN_7100044bd0(aLStack96,this,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100063618;
    FUN_710005a330(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100063618;
    FUN_710005c720(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_7100063618;
    FUN_710004c020(this);
    lib::L2CValue::L2CValue(aLStack144,true);
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_710004c370(aLStack96,this,aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_check_command_squat(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_SQUAT);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x50);
        pLVar4 = aLStack176;
        goto LAB_710006360c;
      }
    }
    FUN_710005abc0(aLStack176,this);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) goto LAB_7100063618;
    FUN_7100022710(aLStack176,this);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,HVar7);
    lib::L2CValue::L2CValue(aLStack208,0x10b42070c0);
    lib::L2CValue::L2CValue(aLStack224,0x16bc8d5368);
    FUN_710004ebd0(aLStack64,this,aLStack176,aLStack192,aLStack208,aLStack224);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar4 = aLStack176;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,lVar6);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,HVar7);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xd0ebd033b);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xec0bbbbde);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) goto LAB_710006357c;
      }
      lib::L2CValue::L2CValue(aLStack144,true);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,HVar7);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xdf4b23e58);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xe14fa8401);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
LAB_710006357c:
          lib::L2CValue::L2CValue(aLStack144,false);
          goto LAB_7100063588;
        }
      }
      lib::L2CValue::L2CValue(aLStack144,true);
    }
LAB_7100063588:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    pLVar4 = aLStack80;
LAB_710006360c:
    lib::L2CValue::_L2CValue(pLVar4);
LAB_7100063610:
    pLVar4 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_7100063618:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

