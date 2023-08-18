
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::JumpSquat_exec(L2CFighterPickel *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CAgent *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
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
  
  lua2cpp::L2CFighterCommon::uniq_process_JumpSquat_exec_status(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_MINI_JUMP);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) goto LAB_710006c0d4;
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar3 & 1U) == 0) goto LAB_710006bff8;
    pLVar8 = (L2CValue *)0x1a;
    pLVar6 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    lib::L2CAgent::math_abs(pLVar6,pLVar8);
    lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0xf929dd70f);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack128);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pLVar8 = (L2CValue *)0x1b;
      pLVar6 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
      lib::L2CAgent::math_abs(pLVar6,pLVar8);
      lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack240,0xfe59ae799);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack192);
      uVar5 = uVar5 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_710006c0d4;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
LAB_710006c0cc:
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar3 & 1U) != 0) {
        pLVar8 = (L2CValue *)0x1a;
        pLVar6 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
        lib::L2CAgent::math_abs(pLVar6,pLVar8);
        lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack208,0xf929dd70f);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar9);
        uVar5 = lib::L2CValue::operator_(aLStack160,aLStack176);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          pLVar8 = (L2CValue *)0x1b;
          pLVar6 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
          lib::L2CAgent::math_abs(pLVar6,pLVar8);
          lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack272,0xfe59ae799);
          uVar5 = lib::L2CValue::as_integer(aLStack256);
          uVar7 = lib::L2CValue::as_integer(aLStack272);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack240,fVar9);
          uVar5 = lib::L2CValue::operator_(aLStack224,aLStack240);
          uVar5 = uVar5 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack224);
        }
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) goto LAB_710006c0d4;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        goto LAB_710006c0cc;
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
LAB_710006bff8:
    lib::L2CValue::_L2CValue(aLStack80);
    lVar1 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710006c0d4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

