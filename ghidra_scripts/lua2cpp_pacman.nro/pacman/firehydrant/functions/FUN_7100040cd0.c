
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100040cd0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this;
  bool bVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack112,0xddc6fd02c);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  uVar3 = lib::L2CValue::operator<=(aLStack80,param_3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
LAB_7100040e90:
    bVar5 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_DOWN);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,360.0);
      uVar3 = lib::L2CValue::operator<=(aLStack80,param_3);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_7100040e90;
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_DOWN_FALL);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack176);
      this = aLStack160;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_DOWN_FALL);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      this = aLStack128;
    }
    lib::L2CValue::~L2CValue(this);
    bVar5 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar5);
  return;
}

