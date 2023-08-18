
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackJump_main(L2CFighterTantan *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710005d640(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_AIR_GET_ITEM);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_71000429c0(aLStack128,this);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      FUN_7100042d70(aLStack96,this);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      FUN_7100059d30(aLStack128,this);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        FUN_7100050280(this);
      }
    }
    FUN_71000504f0(this);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      lua2cpp::L2CFighterCommon::sub_jump_item_rocketbelt(this);
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_POWBLOCK_QUAKE_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar1 & 1U) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack160,fVar9);
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::operator_(pLVar8,aLStack144);
        lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack208,0xe28bbec98);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar9);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x12e1979ad7);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x176b2a21f2);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x12e6fa5ece);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x17f0bb63e4);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x176b2a21f2);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,aLStack128);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lua2cpp::L2CFighterCommon::status_Jump_sub(this,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar8 = aLStack160;
    }
    else {
      HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,HVar6);
      lib::L2CValue::L2CValue(aLStack96,0xba358e95e);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x62abde441);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xb38c9ab48);
          uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x12e1979ad7);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x176b2a21f2);
            lib::L2CValue::operator_(aLStack128,aLStack96);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x12e6fa5ece);
          lib::L2CValue::operator_(aLStack128,aLStack96);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x17f0bb63e4);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::L2CValue(aLStack192,true);
      HVar6 = lib::L2CValue::as_hash(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      bVar3 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar6,fVar9,fVar10,fVar11,(bool)(bVar2 & 1),(bool)(bVar3 & 1))
      ;
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar2 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,false);
        lua2cpp::L2CFighterCommon::sub_fall_common_uniq(this,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
      lib::L2CValue::L2CValue(aLStack96,&DAT_710005d8a0);
      lib::L2CValue::operator_(pLVar8,aLStack96);
      pLVar8 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar8);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack128,0x227270baef);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar6 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar4,HVar6,0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,AttackJump_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

