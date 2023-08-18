
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DaisySpecialNHit_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_STATUS_SPECIAL_N_WORK_FLOAT_SHIELD_LR);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack112);
  if ((uVar2 & 1) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
    uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  FUN_7100202720(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

