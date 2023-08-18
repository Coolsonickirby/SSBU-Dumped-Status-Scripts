
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::JumpSquat_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CAgent *pLVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_MINI_JUMP);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) goto LAB_7100019948;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack96;
LAB_7100019664:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar5 = lib::L2CValue::operator__(aLStack64,pLVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      app::lua_bind::FighterControlModuleImpl__reserve_on_special_button_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      pLVar6 = aLStack64;
      goto LAB_7100019664;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar3 & 1U) == 0) goto LAB_7100019938;
    pLVar6 = (L2CValue *)0x1b;
    pLVar7 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
    lib::L2CAgent::math_abs(pLVar7,pLVar6);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xfe59ae799);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_7100019948;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
LAB_7100019920:
    lVar1 = -0x30;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar3 & 1U) != 0) {
        pLVar6 = (L2CValue *)0x1b;
        pLVar7 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
        lib::L2CAgent::math_abs(pLVar7,pLVar6);
        lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack176,0xfe59ae799);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        uVar5 = lib::L2CValue::operator_(aLStack128,aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_7100019948;
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
        iVar4 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        goto LAB_7100019920;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
LAB_7100019938:
    lib::L2CValue::_L2CValue(aLStack64);
    lVar1 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100019948:
  lua2cpp::L2CFighterCommon::uniq_process_JumpSquat_exec_status(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

