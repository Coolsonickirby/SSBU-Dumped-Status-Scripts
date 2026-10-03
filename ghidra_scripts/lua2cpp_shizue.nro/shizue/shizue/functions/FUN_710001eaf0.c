
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001eaf0(L2CAgent *param_1,L2CValue *param_2)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  ulong auStack272 [2];
  ulong auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  this = &param_1[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::operator*(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack128,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_NEUTRAL);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
          uVar5 = lib::L2CValue::operator<(pLVar4,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) == 0) goto LAB_710001ee28;
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_BACK);
          lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_FRONT);
          lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
        }
        goto LAB_710001ee20;
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
        uVar5 = lib::L2CValue::operator<(pLVar4,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) goto LAB_710001ee28;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_FRONT);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_BACK);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
      }
LAB_710001ee20:
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
LAB_710001ee28:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_FRONT);
    uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_TURN_BACK);
      uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        FUN_710001faa0(param_1);
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) goto LAB_710001f704;
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x3466d2f5df);
  lib::L2CValue::L2CValue(aLStack192,0.05);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KIND_SHIZUE);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack240,0xd0c86f397);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) goto LAB_710001f0fc;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
    lib::L2CValue::operator/(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack144,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar5 = lib::L2CValue::operator<(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
      lib::L2CValue::operator-(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack144,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,2.0);
      lib::L2CValue::operator-(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack176,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::operator*(aLStack144,aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
      lib::L2CValue::operator-((L2CValue *)auStack272,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-0.5);
      lib::L2CValue::operator*((L2CValue *)&local_60,(L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack160,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      puVar7 = auStack272;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
      lib::L2CValue::operator*((L2CValue *)&local_60,aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator*((L2CValue *)auStack256,aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack160,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      puVar7 = auStack256;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar7);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KIND_SHIZUE);
    uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,2.0);
      lib::L2CValue::operator*(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
      lib::L2CValue::operator-((L2CValue *)&local_60,aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator*(aLStack240,(L2CValue *)auStack256);
      lib::L2CValue::operator=(aLStack192,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE);
      fVar8 = (float)lib::L2CValue::as_number(aLStack224);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-180.0);
    lib::L2CValue::operator*((L2CValue *)&local_60,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator+((L2CValue *)auStack256,aLStack192);
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator*(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack160,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack240);
    puVar7 = auStack256;
  }
  else {
LAB_710001f0fc:
    app::lua_bind::PostureModule__reverse_lr_impl(param_1->moduleAccessor);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KIND_SHIZUE);
    uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_ADJUST_ANGLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADJUST_ANGLE_FRAME);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE);
      fVar8 = (float)lib::L2CValue::as_number(aLStack224);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack224);
      if ((bVar2 & 1U) != 0) {
        FUN_710001faa0(param_1);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
    puVar7 = &local_60;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar7);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack224);
  lVar10 = lib::L2CValue::as_number(aLStack160);
  uVar9 = lib::L2CValue::as_number(aLStack240);
  local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl(param_1->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
LAB_710001f704:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

