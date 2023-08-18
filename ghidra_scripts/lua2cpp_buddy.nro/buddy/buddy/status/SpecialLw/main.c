
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialLw_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ItemKind IVar4;
  int iVar5;
  L2CValue *this_00;
  ulong uVar6;
  ulong uVar7;
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
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_BUDDYBOMB);
  uVar3 = lib::L2CValue::as_integer(this_00);
  IVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = app::lua_bind::ItemManager__get_num_of_ownered_item_impl
                    (LUA_SCRIPT_LINE_MAP_CORRECTION,uVar3,IVar4);
  lib::L2CValue::L2CValue(aLStack64,uVar6);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x78694f828);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar5);
  uVar6 = lib::L2CValue::operator_(aLStack64,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_SUCCESS);
    iVar5 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_710001c7c0(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_SUCCESS);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0xf0271344c);
    lib::L2CValue::L2CValue(aLStack160,0x1309e8b998);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0xab6928cf2);
    lib::L2CValue::L2CValue(aLStack160,0xe46c0e666);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack208,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE);
  iVar5 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BUDDY_STATUS_SPECIAL_LW_FLAG_GENERATE_DONE);
  iVar5 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

