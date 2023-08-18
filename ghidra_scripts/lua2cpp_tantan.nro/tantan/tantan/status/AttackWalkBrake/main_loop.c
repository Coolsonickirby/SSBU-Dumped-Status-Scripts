
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackWalkBrake_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    FUN_71000442a0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
LAB_71000613d4:
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WALK_BRAKE);
      lib::L2CValue::L2CValue(aLStack144,false);
      FUN_7100044bd0(aLStack112,this,aLStack128,aLStack144);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_710006160c;
      FUN_710005a330(aLStack112,this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710006160c;
      FUN_710005c720(aLStack112,this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710006160c;
      FUN_710004c020(this);
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue(aLStack176,false);
      FUN_710004c370(aLStack112,this,aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar1 & 1U) == 0) {
LAB_71000615d0:
        FUN_710005abc0(aLStack192,this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator__(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar5 & 1) != 0) goto LAB_710006160c;
        bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) {
          FUN_7100022710(aLStack192,this);
          HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack208,HVar6);
          lib::L2CValue::L2CValue(aLStack240,aLStack192);
          lib::L2CValue::L2CValue(aLStack256,aLStack208);
          lib::L2CValue::L2CValue(aLStack272,0x182ddcfec3);
          lib::L2CValue::L2CValue(aLStack288,0x1e3fd3680a);
          FUN_710004ebd0(aLStack224,this,aLStack240,aLStack256,aLStack272,aLStack288);
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack304,aLStack192);
            lib::L2CValue::L2CValue(aLStack320,aLStack208);
            lib::L2CValue::L2CValue(aLStack336,0x18d7d3c3a0);
            lib::L2CValue::L2CValue(aLStack352,0x1ec5dc5569);
            FUN_710004ebd0(aLStack224,this,aLStack304,aLStack320,aLStack336,aLStack352);
            lib::L2CValue::L2CValue(aLStack80,true);
            uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack352);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack304);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack368,aLStack192);
              lib::L2CValue::L2CValue(aLStack384,aLStack208);
              lib::L2CValue::L2CValue(aLStack400,0x15f254fb34);
              lib::L2CValue::L2CValue(aLStack416,0x1b19fd6b88);
              FUN_710004ebd0(aLStack224,this,aLStack368,aLStack384,aLStack400,aLStack416);
              lib::L2CValue::L2CValue(aLStack80,true);
              uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack416);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
              lib::L2CValue::_L2CValue(aLStack368);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack224,aLStack192);
                lib::L2CValue::L2CValue(aLStack432,aLStack208);
                lib::L2CValue::L2CValue(aLStack448,0x171c51ff07);
                lib::L2CValue::L2CValue(aLStack464,0x1da42e665e);
                FUN_710004ebd0(aLStack80,this,aLStack224,aLStack432,aLStack448,aLStack464);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack464);
                lib::L2CValue::_L2CValue(aLStack448);
                lib::L2CValue::_L2CValue(aLStack432);
                lib::L2CValue::_L2CValue(aLStack224);
              }
            }
          }
          FUN_710005e450(this);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          return;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WAIT);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_check_command_squat(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) == 0) goto LAB_71000615d0;
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_SQUAT);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
      }
      pLVar4 = aLStack192;
      goto LAB_7100061330;
    }
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xa0);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_71000613d4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WALK_BRAKE);
    FUN_7100044720(this,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    pLVar4 = aLStack96;
LAB_7100061330:
    lib::L2CValue::_L2CValue(pLVar4);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710006160c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

