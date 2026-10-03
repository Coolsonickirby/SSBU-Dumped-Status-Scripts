
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f120(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *this;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_LOCK_DIRECTION);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack144,false);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack144);
      fVar6 = (float)app::sv_math::vec3_length(fVar6,fVar7,fVar8);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.01);
      uVar5 = lib::L2CValue::operator<(aLStack144,aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator/(aLStack80,aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::operator+(aLStack176,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
        fVar6 = (float)lib::L2CValue::as_number(aLStack160);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6,iVar4);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::operator/(aLStack96,aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::operator+(aLStack176,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
        fVar6 = (float)lib::L2CValue::as_number(aLStack160);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6,iVar4);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710002f5d4;
      }
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3);
      lib::L2CValue::L2CValue(aLStack144,(float)uVar9);
      lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar9 >> 0x20));
      lib::L2CValue::operator=(aLStack96,aLStack144);
      lib::L2CValue::operator=(aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::operator*(aLStack112,aLStack80);
      lib::L2CValue::operator-(aLStack96);
      lib::L2CValue::operator*(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::operator+(aLStack160,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
      fVar6 = (float)lib::L2CValue::as_number(aLStack192);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6,iVar4);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::operator+(aLStack176,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
      fVar6 = (float)lib::L2CValue::as_number(aLStack192);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar6,iVar4);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue(param_1,1);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
LAB_710002f5d4:
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      return;
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

