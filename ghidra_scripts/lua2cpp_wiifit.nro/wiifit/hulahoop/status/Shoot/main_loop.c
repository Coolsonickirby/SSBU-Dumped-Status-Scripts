
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWiifitHulahoop::status::Shoot_main_loop
          (L2CWeaponWiifitHulahoop *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_WIIFIT_HULAHOOP_STATUS_WORK_FLAG_REMOVE_REQUEST);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_1);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      FUN_7100021470(this);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_2);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      FUN_7100021760(this);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_3);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      FUN_7100021a50(this);
    }
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_WIIFIT_HULAHOOP_STATUS_KIND_BREAK);
    lib::L2CValue::L2CValue(aLStack80,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40))
    ;
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
    goto LAB_71000228b8;
  }
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::operator_(aLStack80);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100022454:
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,false);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack64,30.0);
    uVar7 = lib::L2CValue::operator__(aLStack64,aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::L2CValue(aLStack64,5);
      lib::L2CValue::operator_(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack64,false);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_1);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack112);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0x66933a7e6);
          lib::L2CValue::L2CValue(aLStack144,4);
          HVar8 = lib::L2CValue::as_hash(aLStack128);
          iVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar6 = app::sv_math::rand(HVar8,iVar5);
          lib::L2CValue::L2CValue(aLStack112,uVar6);
          lib::L2CValue::operator_(aLStack112);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar4 & 1U) != 0) {
            FUN_7100021470(this);
            lib::L2CValue::L2CValue(aLStack64,true);
            lib::L2CValue::operator_(aLStack96,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
          }
        }
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_2);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack112);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::operator_(aLStack96);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          if ((bVar4 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack144,0x66933a7e6);
            lib::L2CValue::L2CValue(aLStack160,4);
            HVar8 = lib::L2CValue::as_hash(aLStack144);
            iVar5 = lib::L2CValue::as_integer(aLStack160);
            uVar6 = app::sv_math::rand(HVar8,iVar5);
            lib::L2CValue::L2CValue(aLStack128,uVar6);
            lib::L2CValue::operator_(aLStack128);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((bVar4 & 1U) == 0) goto LAB_710002278c;
            FUN_7100021760(this);
            lib::L2CValue::L2CValue(aLStack64,true);
            lib::L2CValue::operator_(aLStack96,aLStack64);
          }
          lib::L2CValue::_L2CValue(aLStack64);
        }
LAB_710002278c:
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_3);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack112);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::operator_(aLStack96);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack64);
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,0x66933a7e6);
            lib::L2CValue::L2CValue(aLStack160,4);
            HVar8 = lib::L2CValue::as_hash(aLStack144);
            iVar5 = lib::L2CValue::as_integer(aLStack160);
            uVar6 = app::sv_math::rand(HVar8,iVar5);
            lib::L2CValue::L2CValue(aLStack128,uVar6);
            lib::L2CValue::operator_(aLStack128);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((bVar4 & 1U) != 0) {
              FUN_7100021a50(this);
            }
          }
        }
      }
    }
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_ALL);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) == 0) goto LAB_7100022454;
    lib::L2CValue::L2CValue(aLStack80,0x23dd1f1664);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
  lVar2 = -0x40;
LAB_71000228b8:
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

