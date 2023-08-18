
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::FinalJump_main_loop(L2CFighterMetaknight *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x107a6a67b1);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  uVar2 = lib::L2CValue::operator__(aLStack80,pLVar4);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_TARGET_POS_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_FLOAT_TARGET_POS_Y);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    uVar6 = lib::L2CValue::as_number(aLStack96);
    uVar7 = lib::L2CValue::as_number(aLStack112);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar7,uVar6);
    uStack56 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
    fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_METAKNIGHT_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

