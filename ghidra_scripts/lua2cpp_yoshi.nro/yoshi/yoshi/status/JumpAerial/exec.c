
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::JumpAerial_exec(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  undefined8 local_f0;
  ulong uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [24];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xb31d5945e);
  lib::L2CValue::L2CValue(aLStack136,0xa2dc36306);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  uVar3 = lib::L2CValue::as_integer(aLStack136);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack120,iVar1);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_AERIAL_TURN_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack152);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack136,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0);
  uVar2 = lib::L2CValue::operator_((L2CValue *)&local_f0,aLStack136);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_f0,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_AERIAL_TURN_COUNT);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue(aLStack152,0.0);
    lib::L2CValue::L2CValue(aLStack168,0.0);
    lib::L2CValue::L2CValue(aLStack184,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x68,(L2CValue)0x58,(L2CValue)0x48);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    pfVar7 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar7);
    lib::L2CValue::L2CValue(aLStack224,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack208,pfVar7[2]);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_f0);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::operator_(pLVar6,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,180.0);
    lib::L2CValue::operator_((L2CValue *)&local_f0,aLStack120);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,aLStack256);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    uVar8 = lib::L2CValue::as_number(pLVar4);
    uVar9 = lib::L2CValue::as_number(pLVar5);
    uVar10 = lib::L2CValue::as_number(pLVar6);
    local_f0 = CONCAT44(uVar9,uVar8);
    uStack232 = (ulong)uVar10;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_f0,0);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_AERIAL_TURN_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack288);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack272,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,2);
    lib::L2CValue::operator_(aLStack120,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    uVar2 = lib::L2CValue::operator__(aLStack272,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar2 & 1) != 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack120);
  return;
}

