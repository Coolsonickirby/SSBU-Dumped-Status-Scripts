
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038890(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack64);
LAB_71000389b0:
    bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    bVar2 = (bVar2 & 1U) == 0;
    if (bVar2) {
      bVar1 = app::lua_bind::SlowModule__is_skip_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    }
    else {
      bVar1 = 1;
    }
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    if (bVar2) {
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
LAB_7100038c68:
      lib::L2CValue::L2CValue(aLStack176,0);
    }
    else {
      FUN_7100039930(aLStack112,param_2);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) goto LAB_7100038c68;
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_DOWN);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack64);
        fVar5 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack112,fVar5);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,-1.0);
        uVar4 = lib::L2CValue::operator<(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,3);
          uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack128);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) goto LAB_7100038bb4;
        }
        else {
LAB_7100038bb4:
          FUN_7100039a90(aLStack64,param_2);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack176,1);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            goto LAB_7100038c74;
          }
          lib::L2CValue::L2CValue
                    (aLStack64,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_DOWN);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::~L2CValue(aLStack64);
        }
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_7100038c68;
      }
      FUN_7100039a90(aLStack64,param_2);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((bVar2 & 1U) == 0) goto LAB_7100038c68;
      lib::L2CValue::L2CValue(aLStack176,1);
    }
LAB_7100038c74:
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar2 & 1U) == 0) {
      FUN_7100038f50(aLStack64,param_2);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((bVar2 & 1U) == 0) {
        iVar3 = 0;
        goto LAB_7100038cc0;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_END_REACTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) goto LAB_71000389b0;
    FUN_7100038e30(aLStack80,param_2);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FALL);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  iVar3 = 1;
LAB_7100038cc0:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

