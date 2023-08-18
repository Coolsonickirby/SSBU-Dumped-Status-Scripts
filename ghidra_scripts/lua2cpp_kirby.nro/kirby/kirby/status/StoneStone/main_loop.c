
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::StoneStone_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::FighterControlModuleImpl__update_attack_air_kind_impl
                (this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
  lib::L2CValue::L2CValue
            (aLStack80,
             FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S | FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N |
             _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI | _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710022a6dc:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_HOLD_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x156ef8bcb5);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_7100229ec0(aLStack96,this);
      lib::L2CValue::operator_(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_PREV_SITUATION)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) == 0) {
            FUN_7100229610(this);
          }
          FUN_710022ac20(this);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
          GVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_PREV_SITUATION)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) == 0) {
            FUN_7100229610(this);
          }
          FUN_710022ac20(this);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
      FUN_710022a090(aLStack80,this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        FUN_71001a6740(this);
      }
      iVar3 = 0;
      goto LAB_710022aa88;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_STONE_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_STONE_FALL_MIN_CANCEL_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x1eed43d2a2);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710022a6dc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_STONE_END);
    lib::L2CValue::L2CValue(aLStack96,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = 1;
LAB_710022aa88:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

