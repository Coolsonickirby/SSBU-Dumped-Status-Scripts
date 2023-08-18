
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingUp_exec(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *this_00;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined4 local_40 [4];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_40,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)local_40);
  lib::L2CValue::_L2CValue((L2CValue *)local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    local_40[0] = app::sv_camera_manager::camera_range();
    app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_40);
    fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)local_40,fVar5);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x31ed91fca);
    uVar4 = lib::L2CValue::operator_(this_00,(L2CValue *)local_40);
    lib::L2CValue::_L2CValue((L2CValue *)local_40);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_40,_GROUND_CORRECT_KIND_NONE);
      GVar3 = lib::L2CValue::as_integer((L2CValue *)local_40);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_40,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)local_40);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)local_40);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

