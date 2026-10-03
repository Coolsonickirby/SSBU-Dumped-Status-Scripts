
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100030720(L2CWeaponRidleyBreath *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float *pfVar9;
  Hash40 HVar10;
  L2CValue *in_x2;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  undefined8 uVar13;
  long lVar14;
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [16];
  Hash40MapEntry **local_140;
  ulong uStack312;
  L2CValue aLStack304 [16];
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
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack336 + 0x10));
  fVar12 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0.0);
  uVar6 = lib::L2CValue::operator<(aLStack128,(L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xc62eb0c55);
    lib::L2CValue::L2CValue(aLStack144,0xbd93356be);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    in_x2 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,(ulong)in_x2);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),fVar12);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack144,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack336 + 0x10));
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack144,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack336 + 0x10));
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack336 + 0x10),_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_FLOAT_ATTACK_MUL
            );
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
  ppBVar11 = &this->moduleAccessor;
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  fVar12 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::AttackModule__set_power_mul_impl(*ppBVar11,fVar12);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_FLAG_CHANGE_SCALE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),true);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_INT_CHANGE_SCALE_LIFE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0);
    uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack336 + 0x10),
                 _WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_INT_CHANGE_SCALE_LIFE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    }
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_FLOAT_SCALE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),fVar12);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_INT_CHANGE_SCALE_LIFE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0xc62eb0c55);
    lib::L2CValue::L2CValue(aLStack208,0xc532c54f5);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar12);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_70);
    lib::L2CValue::operator/(aLStack208,aLStack160);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,1.0);
    lib::L2CValue::L2CValue(aLStack240,aLStack176);
    lib::L2CValue::L2CValue(aLStack256,aLStack192);
    in_x2 = aLStack240;
    lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x20,SUB81(in_x2,0),(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::operator*(aLStack208,(L2CValue *)(auStack336 + 0x10));
    fVar12 = (float)lib::L2CValue::as_number(aLStack272);
    app::lua_bind::PostureModule__set_scale_impl(*ppBVar11,fVar12,false);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),1);
  uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack336 + 0x10),pLVar8);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192);
      pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar11);
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),*pfVar9);
      pLVar8 = (L2CValue *)(auStack336 + 0x20);
      lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
      lib::L2CValue::L2CValue(aLStack288,pfVar9[2]);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::operator=(aLStack176,pLVar8);
      lib::L2CValue::operator=(aLStack192,aLStack288);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::L2CValue(aLStack208,aLStack160);
      lib::L2CValue::L2CValue(aLStack272,aLStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack336);
      lib::L2CValue::L2CValue(aLStack352);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_UP);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),*pfVar9);
          pLVar8 = (L2CValue *)(auStack336 + 0x20);
          lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
          lib::L2CValue::operator=(aLStack208,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack272,pLVar8);
          lib::L2CValue::~L2CValue(pLVar8);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(float)uVar13);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x20),(float)((ulong)uVar13 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)auStack336,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack352,(L2CValue *)(auStack336 + 0x20));
          goto LAB_71000311f0;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_LEFT);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_LEFT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),*pfVar9);
          pLVar8 = (L2CValue *)(auStack336 + 0x20);
          lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
          lib::L2CValue::operator=(aLStack208,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack272,pLVar8);
          lib::L2CValue::~L2CValue(pLVar8);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_LEFT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(float)uVar13);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x20),(float)((ulong)uVar13 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)auStack336,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack352,(L2CValue *)(auStack336 + 0x20));
          goto LAB_71000311f0;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_RIGHT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),*pfVar9);
          pLVar8 = (L2CValue *)(auStack336 + 0x20);
          lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
          lib::L2CValue::operator=(aLStack208,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack272,pLVar8);
          lib::L2CValue::~L2CValue(pLVar8);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_RIGHT);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar5);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(float)uVar13);
          lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x20),(float)((ulong)uVar13 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)auStack336,(L2CValue *)(auStack336 + 0x10));
          lib::L2CValue::operator=(aLStack352,(L2CValue *)(auStack336 + 0x20));
          goto LAB_71000311f0;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_UP);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar11,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),*pfVar9);
        pLVar8 = (L2CValue *)(auStack336 + 0x20);
        lib::L2CValue::L2CValue(pLVar8,pfVar9[1]);
        lib::L2CValue::operator=(aLStack208,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator=(aLStack272,pLVar8);
        lib::L2CValue::~L2CValue(pLVar8);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_UP);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar11,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(float)uVar13);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x20),(float)((ulong)uVar13 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack336,(L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::operator=(aLStack352,(L2CValue *)(auStack336 + 0x20));
LAB_71000311f0:
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x20));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      }
      lib::L2CAgent::math_atan((L2CAgent *)auStack336,aLStack352,in_x2);
      lib::L2CValue::L2CValue(aLStack400,0x13a088c468);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CValue::operator-(aLStack368);
      HVar10 = lib::L2CValue::as_hash(aLStack400);
      uVar6 = lib::L2CValue::as_number(aLStack208);
      lVar14 = lib::L2CValue::as_number(aLStack272);
      uVar5 = lib::L2CValue::as_number(aLStack192);
      local_140 = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar14 << 0x20);
      uStack312 = (ulong)uVar5;
      uVar6 = lib::L2CValue::as_number(aLStack416);
      lVar14 = lib::L2CValue::as_number(aLStack432);
      uVar5 = lib::L2CValue::as_number(aLStack448);
      local_70 = uVar6 & 0xffffffff | lVar14 << 0x20;
      uStack104 = (ulong)uVar5;
      uVar5 = app::lua_bind::EffectModule__req_impl
                        (*ppBVar11,HVar10,(Vector3f *)(auStack336 + 0x10),(Vector3f *)&local_70,1.0,
                         0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack384,uVar5);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0x1544a7995b);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)(auStack336 + 0x10));
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar11,HVar10,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack464,iVar3);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack512,_WEAPON_RIDLEY_BREATH_STATUS_KIND_VANISH);
        lib::L2CValue::L2CValue(aLStack528,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        bVar2 = true;
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack336 + 0x10),
                   _WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_INT_BOUND_NUM);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack336 + 0x10));
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0xc62eb0c55);
        lib::L2CValue::L2CValue(aLStack400,0xdd28c8020);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        uVar7 = lib::L2CValue::as_integer(aLStack400);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),iVar3);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack400,_WEAPON_RIDLEY_BREATH_INSTANCE_WORK_ID_INT_BOUND_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack400);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)(auStack336 + 0x10),(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack400);
        bVar2 = (uVar6 & 1) == 0;
        if (bVar2) {
          lib::L2CValue::L2CValue(aLStack400,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
          fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::L2CValue(aLStack432,0xc62eb0c55);
          lib::L2CValue::L2CValue(aLStack448,0xb8f4842d6);
          uVar6 = lib::L2CValue::as_integer(aLStack432);
          uVar7 = lib::L2CValue::as_integer(aLStack448);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack416,fVar12);
          lib::L2CValue::operator*(aLStack128,aLStack416);
          lib::L2CValue::operator=(aLStack128,aLStack400);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::L2CValue(aLStack400,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::operator-(aLStack128);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        }
        else {
          lib::L2CValue::L2CValue(aLStack480,_WEAPON_RIDLEY_BREATH_STATUS_KIND_VANISH);
          lib::L2CValue::L2CValue(aLStack496,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
          lib::L2CValue::~L2CValue(aLStack496);
          lib::L2CValue::~L2CValue(aLStack480);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
        bVar2 = !bVar2;
        lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
      }
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue((L2CValue *)auStack336);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      if (bVar2) goto LAB_7100031794;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),0);
  uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_70,(L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack544,_WEAPON_RIDLEY_BREATH_STATUS_KIND_VANISH);
    lib::L2CValue::L2CValue(aLStack560,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::~L2CValue(aLStack560);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_7100031794:
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

