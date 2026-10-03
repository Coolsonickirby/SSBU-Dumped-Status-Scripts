
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a5f0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *this;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 auStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_30,_WEAPON_SZEROSUIT_RETICLE_STATUS_WORK_INT_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_30);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,-1);
  uVar3 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar5 = (float)app::sv_camera_manager::get_fov();
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_30,5.0);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&local_30,aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_30);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xd68857cec);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x167ffaf65c);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar5);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_30);
      lib::L2CValue::~L2CValue((L2CValue *)&local_30);
      this = auStack128;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_30,0xd68857cec);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,0x10e1d44649);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_30);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack112,fVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_30);
      lib::L2CValue::L2CValue((L2CValue *)&local_30,0.0);
      uVar3 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_30);
      lib::L2CValue::~L2CValue((L2CValue *)&local_30);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_30,0x1e);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_30);
        lib::L2CValue::~L2CValue((L2CValue *)&local_30);
      }
      lib::L2CValue::operator/(aLStack112,aLStack96);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_30);
      this = &local_30;
    }
    lib::L2CValue::~L2CValue((L2CValue *)this);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack80);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    local_30 = CONCAT44(uVar7,uVar6);
    uStack40 = (ulong)uVar8;
    app::lua_bind::EffectModule__set_scale_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,(Vector3f *)&local_30);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

