
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDaisy::status::Jump_main(L2CFighterDaisy *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_jump_item_rocketbelt(this);
  lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lua2cpp::L2CFighterCommon::status_Jump_sub(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
  lib::L2CValue::L2CValue(aLStack208,_SITUATION_KIND_WATER);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PEACH_INSTANCE_WORK_ID_FLAG_JUMP_FROM_WATER);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
    pLVar2 = aLStack208;
  }
  else {
    pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,*pfVar4);
    lib::L2CValue::L2CValue(aLStack192,pfVar4[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar4[2]);
    FUN_710000d400(aLStack160,this,aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(pLVar2,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_INSTANCE_WORK_ID_FLOAT_JUMP_START_Y_FROM_WATER)
    ;
    fVar5 = (float)lib::L2CValue::as_number(aLStack224);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_INSTANCE_WORK_ID_FLAG_JUMP_FROM_WATER);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar2 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar2);
  lib::L2CValue::L2CValue(aLStack96,Jump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

