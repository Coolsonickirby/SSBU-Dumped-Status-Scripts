
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000452b0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue
            (aLStack96,
             _GROUND_TOUCH_FLAG_DOWN_LEFT | _GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_UP_LEFT);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,
               _GROUND_TOUCH_FLAG_DOWN_RIGHT | GROUND_TOUCH_FLAG_RIGHT | GROUND_TOUCH_FLAG_UP_RIGHT)
    ;
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar6 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        return;
      }
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(param_1,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_SPIKEBALL_HOP_REASON_DOWN_HIT);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_HIT_REASON);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,iVar5);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(param_1,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_SPIKEBALL_HOP_REASON_RIGHT_HIT);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_HIT_REASON);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,iVar5);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(param_1,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACKUN_SPIKEBALL_HOP_REASON_LEFT_HIT);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_HIT_REASON);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4,iVar5);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

