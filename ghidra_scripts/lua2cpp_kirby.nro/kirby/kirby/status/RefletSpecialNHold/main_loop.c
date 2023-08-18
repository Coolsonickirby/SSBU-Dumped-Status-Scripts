
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialNHold_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_GUARD_TRIGGER);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar3 = SITUATION_KIND_AIR;
      if ((bVar2 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        uVar6 = lib::L2CValue::operator__(aLStack80,pLVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710019faf4;
        }
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_ESCAPE_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_AIR);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710019faf4;
        }
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_JUMP_CANCEL)
          ;
          lib::L2CValue::L2CValue(aLStack112,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar5 = aLStack80;
          goto LAB_71001a0170;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterCommon::sub_check_jump_in_charging(this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001a00e4;
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_F);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001a00e4;
          }
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_STICK_ESCAPE_B);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
            lib::L2CValue::L2CValue
                      (aLStack128,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            goto LAB_71001a00e4;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_INT_NEXT_STATUS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_71001a00e4:
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_CANCEL);
          lib::L2CValue::L2CValue(aLStack128,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack112);
          goto LAB_710019faf4;
        }
        pLVar5 = aLStack112;
LAB_71001a0170:
        lib::L2CValue::_L2CValue(pLVar5);
      }
      lib::L2CValue::L2CValue(aLStack128,aLStack96);
      FUN_7100199fc0(this,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_REFLET_INSTANCE_WORK_ID_SPECIAL_N_CHARGE_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,fVar7);
      fVar7 = (float)lib::L2CValue::as_number(aLStack144);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar7);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      FUN_710019cb00(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_710019faf4;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack112,true);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710019faf4:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

