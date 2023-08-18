
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::LandingLight_init(L2CFighterDolly *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack96,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Dolly::update_opponent_lr_1on1(pBVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LANDING_FLAG_PROG_TURN_RESERVE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_TURN);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  uVar5 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    iVar1 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack128,iVar1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack128);
LAB_710000702c:
      lib::L2CValue::L2CValue(aLStack80,0xd6c194559);
      lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init_main(this,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100007150;
    }
    iVar1 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack144,iVar1);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,1);
      uVar2 = lib::L2CValue::as_integer(aLStack176);
      iVar1 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,uVar2);
      lib::L2CValue::L2CValue(aLStack160,iVar1);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_710000702c;
    }
  }
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100007150:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

