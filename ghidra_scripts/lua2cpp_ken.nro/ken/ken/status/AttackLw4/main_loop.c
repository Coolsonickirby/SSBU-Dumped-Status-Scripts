
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::AttackLw4_main_loop(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710002163c:
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_ATTACK_FLAG_HIT_CANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          FUN_710001f280(aLStack64,this,aLStack96);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) != 0) goto LAB_7100021824;
        }
      }
      goto LAB_7100021730;
    }
    lib::L2CValue::L2CValue(aLStack112,_COLLISION_KIND_MASK_SHIELD | _COLLISION_KIND_MASK_HIT);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::AttackModule__is_infliction_status_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710002163c;
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    FUN_710001f0c0(aLStack64,this,aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710002163c;
LAB_7100021824:
    iVar3 = 1;
    goto LAB_7100021b8c;
  }
LAB_7100021730:
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x192c9d0740);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar8);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      FUN_710001fb70(aLStack144,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) goto LAB_7100021824;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    iVar3 = app::lua_bind::ComboModule__count_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack160,0xd320020f6);
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    uVar5 = lib::L2CValue::operator_(aLStack128,aLStack144);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
      lib::L2CValue::operator_(pLVar6,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      if ((bVar2 & 1U) == 0) {
        uVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar5 = lib::L2CValue::operator__(aLStack208,aLStack64);
        uVar5 = uVar5 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
      }
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::attack_lw4_mtrans(this);
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100021a9c:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_7100021b84;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100021a9c;
  }
LAB_7100021b84:
  iVar3 = 0;
LAB_7100021b8c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

