
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDaisy::status::SpecialLw_init(L2CFighterDaisy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this_00;
  FighterModuleAccessor *pFVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Peach::special_lw_check_num_of_item(pFVar5);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_FLAG_FIX_RAND);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x1902bf6946);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0x77a08c3fc);
      HVar9 = lib::L2CValue::as_hash(aLStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = app::sv_math::rand(HVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,uVar4);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_NONE);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_WORK_INT_UNIQ_ITEM_KIND);
      lVar6 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack192,0x215586d005);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack240,0x2242f3c4a3);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack208,iVar3);
      lib::L2CValue::operator_(aLStack160,aLStack208);
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0x23bcdac6fe);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      uVar8 = lib::L2CValue::as_integer(aLStack288);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack256,iVar3);
      lib::L2CValue::operator_(aLStack144,aLStack256);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) goto LAB_7100006d2c;
      lib::L2CValue::L2CValue(aLStack144,0x77a08c3fc);
      HVar9 = lib::L2CValue::as_hash(aLStack144);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar4 = app::sv_math::rand(HVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,uVar4);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x215586d005);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      uVar8 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar7 = lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack176,0x215586d005);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
        lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack224,0x2242f3c4a3);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        uVar8 = lib::L2CValue::as_integer(aLStack224);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack192,iVar3);
        lib::L2CValue::operator_(aLStack144,aLStack192);
        uVar7 = lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_BEAMSWORD);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_WORK_INT_UNIQ_ITEM_KIND);
          lVar6 = lib::L2CValue::as_integer(aLStack80);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_DOSEISAN);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_WORK_INT_UNIQ_ITEM_KIND);
          lVar6 = lib::L2CValue::as_integer(aLStack80);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_BOMBHEI);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_WORK_INT_UNIQ_ITEM_KIND)
        ;
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PEACH_STATUS_SPECIAL_LW_WORK_INT_UNIQ_ITEM_KIND);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100006d2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

